# OnePlus 8T KernelSU + SUSFS Kernel

> **Device**: OnePlus 8T (kebab / KB2000)
> **SoC**: Snapdragon 865 (SM8250)
> **ROM**: LineageOS 20.0 (Android 13)
> **Kernel**: Linux 4.19.x
> **KernelSU**: SukiSU-Ultra v4.1.3 (builtin)
> **SUSFS**: v1.5.5 (kernel-4.19 branch)

## Features

- KernelSU root management
- SUSFS kernel-level hiding
- Root environment hiding for banking/gaming apps
- Compatible with LineageOS 20.0 (Android 13)

## Build

This project uses GitHub Actions for automated builds.

### Prerequisites

- GitHub account with access to this repository
- macOS/Linux with ADB and Fastboot installed

### Build Process

1. Push code to `main` branch
2. GitHub Actions automatically triggers build
3. Wait 60-100 minutes for compilation
4. Download artifact from Actions tab

### Output

- `kebab-kernelsu-susfs-a13-4.19.zip` - Flashable boot.img package

## Installation

### Prerequisites

- Unlocked bootloader
- LineageOS 20.0 installed
- Fastboot mode accessible

### Flash

```bash
# 1. Enter Fastboot mode
adb reboot bootloader

# 2. Flash custom kernel
fastboot flash boot_a kebab-kernelsu-susfs-a13-4.19.zip

# 3. Reboot
fastboot reboot
```

### Rollback (if bootloop)

```bash
# Quick rollback to original kernel
fastboot flash boot_a /path/to/original/boot.img
fastboot flash dtbo_a /path/to/original/dtbo.img
fastboot reboot
```

## Safety

- **Always keep original boot.img backup before flashing**
- **Rollback time: ~5 minutes**
- **Data is NOT affected by kernel flashing**

## Project Structure

```
.
├── .github/
│   └── workflows/
│       └── build.yml          # CI/CD configuration
├── scripts/
│   └── build.sh               # Main build script
├── kernel-patches/
│   ├── ksu.config             # KernelSU + SUSFS configuration
│   └── susfs_stubs.c          # Stub implementations
├── README.md                  # This file
└── output/                    # Build artifacts (generated)
```

## License

This project is for educational purposes only.

## Disclaimer

- Use at your own risk
- Flashing custom kernels may void warranty
- Always backup important data before flashing
