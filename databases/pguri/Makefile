PORTNAME=	pguri
PORTVERSION=	1.20151224
PORTREVISION=	3
CATEGORIES=	databases

MAINTAINER=	tz@FreeBSD.org
COMMENT=	URI datatype for PostgreSQL
WWW=		https://github.com/petere/pguri

BUILD_DEPENDS=	uriparser>=0.8.0:net/uriparser
RUN_DEPENDS=	uriparser>=0.8.0:net/uriparser

USES=		gmake pgsql pkgconfig
LLD_UNSAFE=	yes

USE_GITHUB=	yes
GH_ACCOUNT=	petere

PLIST_FILES=	lib/postgresql/uri.so share/postgresql/extension/uri--0.sql \
		share/postgresql/extension/uri--1.sql \
		share/postgresql/extension/uri--0--1.sql \
		share/postgresql/extension/uri.control

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/lib/postgresql/uri.so

.include <bsd.port.mk>
