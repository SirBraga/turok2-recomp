# Turok 2: Recompiled

[English](README.md)

[![status](https://img.shields.io/badge/status-testes%20iniciais-orange)](https://github.com/SirBraga/turok2-recomp)
[![cadence](https://img.shields.io/badge/cadence-120%20FPS%20%2F%20120%20Hz-brightgreen)](https://github.com/SirBraga/turok2-recomp)
[![platform](https://img.shields.io/badge/windows-x64%20build-0078D6)](https://github.com/SirBraga/turok2-recomp/actions)
[![engine](https://img.shields://img.shields.io/badge/renderer-RT64-lightgrey)](https://github.com/rt64/rt64)
[![pipeline](https://img.shields.io/badge/pipeline-N64Recomp-blue)](https://github.com/Mr-Wiseguy/N64Recomp)

Port nativo de **Turok 2: Seeds of Evil** (Nintendo 64, USA 1.0) feito com [N64Recomp](https://github.com/Mr-Wiseguy/N64Recomp), [N64ModernRuntime](https://github.com/Mr-Wiseguy/N64ModernRuntime), [RT64](https://github.com/rt64/rt64) e [RecompFrontend](https://github.com/N64Recomp/RecompFrontend).

Isto **não** é um emulador com casca. O MIPS original vira C nativo, liga num runtime moderno, e abre com launcher de verdade, opções de vídeo, teclado / mouse / controle, e apresentação a **120 FPS / 120 Hz**.

> **Fase inicial de testes.** O jogo sobe, joga, e apresenta **120 frames únicos por segundo** num relógio de **120 Hz**. Essa é a cadência que estamos afinando. Ainda é o primeiro teste público: crash, efeito estranho, áudio falhando e input torto **vão acontecer**. Estamos jogando, achando o bug e tentando arrumar. Trate cada build como experimental.

---

## Uma nota do autor

Sou um fã enorme de **Turok 2**. É o jogo de N64 que eu nunca larguei de verdade — o Hub, Port of Adia, os totens de energia, a War Blade, o jeito que a trilha explode quando você cai num mundo novo. Eu queria isso no PC do jeito que os recomp modernos fazem: a sua ROM, janela nativa, mouse de verdade, widescreen e um frame rate que o hardware original não tinha como oferecer.

Este repositório é essa tentativa. Estou construindo porque eu amo o jogo, não porque está pronto. Se explodir, faz parte. Anota, ri, e a gente corre atrás.

— **Pedro Braga** ([@SirBraga](https://github.com/SirBraga))

---

## O que esperar agora

| Área | Hoje |
| --- | --- |
| **Status** | Testes públicos iniciais. Dá pra jogar, não está polido. |
| **Frame rate** | **120 FPS** com Update/Draw únicos. Não é interpolação 30→120. |
| **Refresh** | VI / apresentação em **120 Hz**. |
| **Launcher** | UI nativa: carregar ROM, jogar, controles, opções, mods. |
| **Windows** | O CI gera o zip `Turok2Recompiled-windows-x64` pronto pra rodar. |
| **ROM** | Você traz o dump USA 1.0. Nunca vai no repositório. |

No N64 o jogo rodava a 30 Hz na jogatina e 15 Hz nas cinemáticas. Este port **não** finge suavidade misturando esses frames. O engine mesmo anda a 120 updates únicos, o tempo de cinema continua em segundos do original, e os contadores de 15/30 são escalados para não disparar 4× / 8×. A interpolação do RT64 fica desligada de propósito.

Se quiser o scheduler 30/15 original pra comparar, use `TUROK2_AUTHORED_CADENCE=1`. Se quiser A/B em 60 Hz, use `TUROK2_UNIQUE_60=1`. O padrão é **unique 120**.

---

## Bugs vão acontecer

Isto é bancada de teste. Famílias de problema que já conhecemos:

- Crash num level, save ou cinema específico
- Efeito ainda rápido ou picotado demais (água, laser, overlay, partícula)
- Estalo de áudio, bank faltando, cutscene muda
- Mouse look / analog look que ainda precisa de passe
- Layout torto no launcher ou no menu
- Só no Windows: runtime do VC++, GPU, Vulkan / D3D12

**Reporta.** Uma nota curta com o nome do level, o que você apertou e se reproduz já ajuda. A gente está caçando isso, não empurrando com a barriga.

---

## De onde estamos → aonde queremos chegar

```text
Cartucho N64
    → splat / ELF / N64Recomp
        → Turok2Recompiled nativo
            → teste jogável a 120 FPS  ← você está aqui
                → 1.0 estável
                    → polish HD / widescreen
                        → jogos irmãos (Turok 3, Armorines)
```

### 1. Bring-up — feito

- [x] Conferir a ROM USA 1.0 (`SHA1 fb0400f21e3f043939ab56500c7b12a3231006f1`)
- [x] Recuperar o mapa de memória e ~13 mil funções
- [x] Confirmar `F3DEX` + `aspMain` de estoque (sem microcode custom)
- [x] Recompilar pra C nativo e linkar N64ModernRuntime + RT64
- [x] TLB / PI o bastante pra bootar e ficar in-game
- [x] Consertar o caminho de RAX / bank de áudio
- [x] Abrir janela de verdade e desenhar o jogo

### 2. Teste jogável — agora

- [x] Passar da title screen e entrar em level
- [x] Apresentação **120 FPS / 120 Hz** única (padrão)
- [x] Escalar leftovers de 15/30 para freeze, i-frame, laser, água e menu não rodarem 4×
- [x] Launcher do RecompFrontend (Carregar ROM / Jogar, Controles, Opções, Mods)
- [x] Teclado, mouse e controle, com mouse-look e analog look
- [x] Aba de gráficos: filtro, HUD/2D, FOV, far / fog
- [x] Artefato de CI no Windows + `scripts/build-windows.ps1` local
- [ ] Hub → primeiros mundos sem crash num boot limpo
- [ ] Áudio estável em cinema e combate
- [ ] Input com cara de produto, não de bring-up

### 3. 1.0 estável

- [ ] Fechar a auditoria de timing 15/30 que ainda sobrou
- [ ] Save confiável (in-game + host)
- [ ] Perfil de controle e tela de binds limpa
- [ ] Pasta Windows no estilo instalador e build de macOS / Linux que a pessoa só abre
- [ ] Log / crash report que o tester consegue anexar

### 4. O port que a gente realmente quer

- [ ] Pack de textura HD (F2 já dumpa hash pra esse trabalho)
- [ ] Widescreen de verdade e HUD nítido
- [ ] Acessibilidade: FOV, sensibilidade, deadzone, modo 60 Hz opcional
- [ ] API de mod que não seja só uma pasta chamada `mods`

### 5. Mesmo engine, próximos jogos

Turok 2, Turok 3 e **Armorines: Project S.W.A.R.M.** compartilham o engine da Acclaim Studios London. A aposta longa é que runtime, história de TLB e renderer transferem.

- [ ] Separar hook do jogo do suporte compartilhado
- [ ] Bring-up de Turok 3 no mesmo stack
- [ ] Investigar Armorines
- [ ] Stretch: Android via Vulkan do RT64

---

## Como jogar (Windows)

1. Baixa o artefato **Actions** `Turok2Recompiled-windows-x64` deste repositório, **ou** builda local (abaixo).
2. Instala o [Visual C++ 2015–2022 x64](https://learn.microsoft.com/en-us/cpp/windows/latest-supported-vc-redist) se o Windows pedir DLL de runtime.
3. Roda `Turok2Recompiled.exe`.
4. **Carregar ROM** e escolhe o dump **Turok 2 USA 1.0**.
5. O botão vira **Jogar**. Esc ou F10 abre o menu no jogo.

O `portable.txt` ao lado do exe deixa save e config nessa pasta. Apaga se quiser `%LOCALAPPDATA%\turok2-recompiled`.

### ROM obrigatória

Você precisa dumpar um cartucho que é seu. A ROM **não** está neste repo e nunca vai estar.

| Campo | Valor |
| --- | --- |
| Jogo | Turok 2: Seeds of Evil |
| Região | USA 1.0 |
| Nome interno | `Turok 2: Seeds of Ev` |
| ID | `NT2E` |
| Tamanho | 32 MB |
| SHA1 | `fb0400f21e3f043939ab56500c7b12a3231006f1` |

---

## Controles (padrão)

| Ação | Teclado | Nota |
| --- | --- | --- |
| Andar | WASD | Movimento do engine, não stick N64 falso |
| Olhar | Mouse | Sensibilidade fica em Opções |
| Atirar | bind de Z / trigger | Remapeia em Controles |
| Pulo / mira / agachar | Aba Controles | O mais perto possível do layout N64 |
| Pause | Enter / Start | |
| Menu | Esc / F10 | Config do launcher por cima do jogo |
| Pular cinema | Backspace / P / F8 | F8 é o skip de debug |
| Quick save / load | 5 / 7 ou F5 / F7 | Ferramenta de bring-up, não é o save final |
| HUD de debug | F3 | Desligado por padrão |
| Dump de textura | F2 | Hash em `runtime-data/texture-dumps/` |

Controle funciona. Os binds ficam salvos entre as sessões.

---

## Buildar você mesmo

### Windows (melhor pra tester)

Precisa de Visual Studio 2022+ com Desktop C++, e CMake. Ninja é opcional.

```powershell
powershell -ExecutionPolicy Bypass -File scripts\build-windows.ps1
```

Ou dois cliques em `scripts\build-windows.bat`. A pasta jogável é `dist\Turok2Recompiled\`.

### CI

Cada push nesta branch roda `.github/workflows/windows.yml` e sobe `Turok2Recompiled-windows-x64`.

### CMake (qualquer host que já builda o app)

```bash
cmake -S projects/turok2-decomp -B build-app -DTUROK2_BUILD_APP=ON
cmake --build build-app --target Turok2Recompiled
```

No macOS / Linux precisa de SDL2 do sistema. No Windows o tree já traz SDL2 e DXC.

---

## Layout do projeto

```text
projects/turok2-decomp/   port, funcs recompiladas, patches, cola do launcher
tools/N64Recomp/          recompiler estático
tools/N64ModernRuntime/   runtime (librecomp + ultramodern)
tools/rt64/               renderer
tools/RecompFrontend/     menus, input, RmlUi
scripts/build-windows.ps1 pacote local de Windows
```

As notas antigas de splat / matching continuam em `projects/turok2-decomp/docs/`. O trabalho deste repo agora é o **port nativo**, não um decomp matching.

---

## Créditos

Nada daqui existiria sem quem abriu a trilha:

- [Drahsid/turok3](https://github.com/Drahsid/turok3) e [LibTEngine](https://github.com/Drahsid/LibTEngine) — mesma família de engine, o motivo disto ser possível
- [Mr-Wiseguy/N64Recomp](https://github.com/Mr-Wiseguy/N64Recomp), [N64ModernRuntime](https://github.com/Mr-Wiseguy/N64ModernRuntime)
- [rt64/rt64](https://github.com/rt64/rt64)
- RecompFrontend / RmlUi / SDL2
- [ethteck/splat](https://github.com/ethteck/splat), docs da N64Brew, Kaiser / Turok EX, e todo mundo que manteve o Turok vivo

Notas completas: [`projects/turok2-decomp/CREDITS.md`](projects/turok2-decomp/CREDITS.md).

---

## Legal

Turok 2: Seeds of Evil e todos os assets originais pertencem aos donos dos direitos. Este projeto **não** distribui ROM, textura ou música.

O trabalho de engenharia reversa daqui (cola de tool, patch, documentação) sai em [CC0 1.0](projects/turok2-decomp/LICENSE), salvo dependência vendored com licença própria. Use dump de um cartucho que é seu.

---

Se você só quer uma sessão de Turok 2 sem risco, emulador ainda é a resposta segura. Se quer ajudar a puxar este jogo pra um futuro nativo a 120 Hz, você está no lugar certo. Joga. Quebra. Conta o que quebrou.
