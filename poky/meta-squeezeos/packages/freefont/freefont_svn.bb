DESCRIPTION = "Freefont"
SECTION = "libs"
LICENSE = "GPLv2"

BV = "20060126"

PV = "${BV}+svnr${SRCREV}"
#PR="r0"

SRC_URI="${SQUEEZEPLAY_SCM};module=freefont-${BV}"

S = "${WORKDIR}/freefont-${BV}"

do_install() {
	mkdir -p ${D}/${datadir}/jive/fonts
	install -m 0644 FreeSans.ttf ${D}/${datadir}/jive/fonts
	install -m 0644 FreeSansBold.ttf ${D}/${datadir}/jive/fonts
}

FILES_${PN} += "${datadir}"