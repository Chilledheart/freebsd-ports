PORTNAME=		intel-backlight
DISTVERSION=		20200418
PORTREVISION=		3
CATEGORIES=		graphics

MAINTAINER=		jmd@FreeBSD.org
COMMENT=		Control backlight on various modern Intel(R) GPUs
WWW=		https://github.com/FreeBSDDesktop/intel_backlight_fbsd

LICENSE=		MIT
LICENSE_FILE=		${WRKSRC}/COPYING

DEPRECATED=		Use backlight(8)
EXPIRATION_DATE=	2024-07-01

ONLY_FOR_ARCHS=		amd64 i386
ONLY_FOR_ARCHS_REASON=	this hardware is only found on Intel x86 systems

LIB_DEPENDS=		libdrm.so:graphics/libdrm \
			libpciaccess.so:devel/libpciaccess

USE_GITHUB=		yes
GH_ACCOUNT=		FreeBSDDesktop
GH_PROJECT=		intel_backlight_fbsd
GH_TAGNAME=		a6c0e39

PORTEXAMPLES=		asmc_backlight.sh \
			isl_backlight.sh \
			acpi-video-intel-backlight.conf

MAKE_ARGS=		MANPREFIX=${PREFIX}/share
INSTALL_TARGET=		install-strip

OPTIONS_SUB=		yes
OPTIONS_DEFINE=		EXAMPLES SUID
OPTIONS_DEFAULT=	SUID
SUID_DESC=		Install intel_backlight with the setuid bit set

do-install-EXAMPLES-on:
	cd ${WRKSRC} &&	${COPYTREE_SHARE} "${PORTEXAMPLES}" ${STAGEDIR}${EXAMPLESDIR}

.include <bsd.port.mk>
