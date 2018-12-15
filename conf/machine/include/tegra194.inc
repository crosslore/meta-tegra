# Settings common to all Xavier (tegra194) SoCs

SOC_FAMILY = "tegra194"

require conf/machine/include/soc-family.inc
require conf/machine/include/arm/arch-armv8.inc

KERNEL_IMAGETYPE = "Image"

MACHINE_FEATURES = "alsa usbhost pci rtc cuda"
MACHINE_ESSENTIAL_EXTRA_RDEPENDS = "tegra-firmware"
MACHINE_EXTRA_RDEPENDS = "tegra-nvpmodel tegra-nvphs tegra-configs-nvstartup tegra-configs-udev"

INITRD_IMAGE ?=	"tegra186-minimal-initramfs"
IMAGE_CLASSES_append = " image_types_cboot"
INITRD_FSTYPES ?= "cpio.gz.cboot"
IMAGE_UBOOT ?= ""

TEGRA_AUDIO_DEVICE ?= "tegrahdat194ref"

SERIAL_CONSOLE = "115200 ttyTCU0"

KERNEL_MODULE_AUTOLOAD = ""

NVIDIA_CHIP = "0x19"
BOARDID = "2888"
FAB = "400"

DEB_PKG_EXTENSION = "arm64"

CUDA_VERSION ?= "10.0"
CUDA_NVCC_ARCH_FLAGS ?= "--gpu-architecture=compute_72 --gpu-code=sm_72"

PREFERRED_PROVIDER_libdrm = "libdrm-tegra-shim"
PREFERRED_PROVIDER_drm = "libdrm-tegra-shim"
PREFERRED_PROVIDER_virtual/bootloader ?= "cboot"
PREFERRED_PROVIDER_cboot ?= "cboot-prebuilt"

require conf/machine/include/tegra-common.inc