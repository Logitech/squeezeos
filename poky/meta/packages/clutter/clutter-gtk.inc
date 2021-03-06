DESCRIPTION = "Clutter GTK+"
HOMEPAGE = "http://www.clutter-project.org/"
LICENSE = "LGPL"

DEPENDS = "gtk+"

FILESPATH = "${FILE_DIRNAME}/clutter-gtk"

PACKAGES =+ "${PN}-examples"
FILES_${PN}-examples = "${bindir}/gtk-clutter-test ${bindir}/gtk-clutter-events ${bindir}/gtk-clutter-multistage"

inherit autotools_stage pkgconfig gtk-doc

