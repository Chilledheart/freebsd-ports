PORTNAME=	metamail
PORTVERSION=	2.7
PORTREVISION=	16
CATEGORIES=	mail
MASTER_SITES=	http://ftp.funet.fi/pub/unix/mail/metamail/ \
		ftp://ftp.research.telcordia.com/pub/nsb/
DISTNAME=	mm${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Implementation of MIME, the Multipurpose Internet Mail Extensions

LICENSE=	MIT

USES=		ncurses tar:Z
MAKE_ARGS=	LDLIBS="${LDFLAGS}"

WRKSRC=		${WRKDIR}/${DISTNAME}/src

OPTIONS_DEFINE=	X11
OPTIONS_SUB=	yes

X11_DESC=		X11 hebrew font support
X11_BUILD_DEPENDS=	bdftopcf:x11-fonts/bdftopcf \
			mkfontscale>=0:x11-fonts/mkfontscale
X11_RUN_DEPENDS=	xloadimage:x11/xloadimage \
			mkfontscale>=0:x11-fonts/mkfontscale
X11_USES=		xorg
X11_USE=		XORG=x11
X11_EXTRA_PATCHES=	${FILESDIR}/extra-patch-Makefile-x11
X11_EXTRA_PATCHES_OFF=	${FILESDIR}/extra-patch-Makefile-nox11

post-patch-X11-off:
	@${REINPLACE_CMD} -e '/fonts/d' ${WRKSRC}/Makefile

post-patch:
	@${REINPLACE_CMD} -e '/^MAN.DIR/s,/man,/share/man,' ${WRKSRC}/Makefile

post-install:
	${MV} ${STAGEDIR}${PREFIX}/etc/mailcap \
		${STAGEDIR}${PREFIX}/etc/mailcap.sample

.include <bsd.port.mk>
