PORTNAME=	libfontenc
DISTVERSION=	1.1.8
CATEGORIES=	x11-fonts

MAINTAINER=	x11@FreeBSD.org
COMMENT=	The fontenc Library
WWW=		https://www.x.org/

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/COPYING

USES=		tar:xz xorg xorg-cat:lib
USE_XORG=	xorgproto

CONFIGURE_ARGS=	--with-encodingsdir=${LOCALBASE}/share/fonts/encodings

.include <bsd.port.mk>
