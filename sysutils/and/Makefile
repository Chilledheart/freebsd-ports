PORTNAME=	and
PORTVERSION=	1.2.2
PORTREVISION=	2
CATEGORIES=	sysutils
MASTER_SITES=	SF

MAINTAINER=	portmaster@BSDforge.com
COMMENT=	Auto Nice Daemon
WWW=		https://and.sourceforge.net/

LICENSE=	GPLv2+
LICENSE_FILE=	${WRKSRC}/LICENSE

USES=		gmake
ALL_TARGET=	default
NOPRECIOUSMAKEVARS=	yes

post-patch:
	@${REINPLACE_CMD} "s,P_KTHREAD,P_KPROC,g" \
		${WRKSRC}/Makefile ${WRKSRC}/and-OpenBSD.c

.include <bsd.port.mk>
