# 💻⚙️ Peax OS

A very small operating system that functions as a terminal tool developed by **RacX Labs**.

## ✨ Main Features
- **Age Calculator:** Detailed breakdown of your age.
- **Number Calculator:** Simple and fast arithmetic operations.
- **ASCII Converter:** Convert characters to ASCII values.
- **Simple Encryption:** Basic character encryption for privacy.
- **Odd/Even number Checker:** Quickly identifies if a number is **Odd** or **Even**.
- **Phone Suggester:** It suggests a phone based on your budget and usage. 
- **User Experience:** Includes ASCII art headers, screen clearing, and input validation to prevent crashes.
## 💻 Tech Stack
- **Language:** C++
- **OS:** Arch Linux (Core i3 2nd Gen)
- **Compiler:** g++

## 🛠️ How to Run
```zsh
g++ Peax.cpp -o peax
./peax
```
---
*Developed by **Mtitla**.*

**RacX Brand** aims to become a larger brand and develop its own distribution: **PeaX OS**. **RacX** currently consists of only one developer who is learning **kernel** and **operating system** development.

## RoadMap
🌑 **Phase 1: Foundation (Current)**

    [x] Core CLI Utilities: Basic math, encryption, and hardware tools.

    [x] Input Validation: Robust error handling to prevent system crashes.

    [x] Brand Identity: Establishing RacX Labs and the PeaX visual identity.

🌒 **Phase 2: System Integration (Near Future)**

    [ ] File Management System: Create, delete, and modify files directly through PeaX.

    [ ] Personalized Profiles: Support for multiple user profiles and local settings storage.

    [ ] Process Simulation: A basic task manager to monitor "system" resource usage.

    [ ] Advanced Phone Suggester: Integration of a local database for real-time hardware matching.

🌓 **Phase 3: The "Pseudo-Kernel" Layer**

    [ ] Custom Command Parser: Moving away from standard shell inputs to a dedicated PeaX interpreter.

    [ ] Memory Management Simulation: Learning and implementing how the OS allocates RAM for tasks.

    [ ] Scripting Support: Allowing users to run simple .px scripts within PeaX.

🌕 **Phase 4: Independence (The Ultimate Goal)**

    [ ] Bootloader Development: Researching how to boot PeaX without an underlying Linux distro.

    [ ] Hardware Abstraction Layer (HAL): Direct communication with CPU/GPU components.

    [ ] Native GUI: Transitioning from a pure CLI to a minimalist, high-performance graphical interface.