PORTNAME=	urelay
PORTVERSION=	1.0
PORTREVISION=	1
CATEGORIES=	net
MASTER_SITES=	http://devel.ringlet.net/net/urelay/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	UCSPI-based TCP forwarder
WWW=		https://devel.ringlet.net/net/urelay/

USES=		uidfix
PLIST_FILES=	bin/urelay \
		share/man/man1/urelay.1.gz

MAKE_ARGS=	MANDIR=${PREFIX}/share/man/man
MAKE_ENV+=      NO_WDATE_TIME=yes

.include <bsd.port.mk>
