PORTNAME=	pkg_rmleaves
PORTVERSION=	20190108
PORTREVISION=	1
CATEGORIES=	ports-mgmt
MASTER_SITES=	https://files.wittig.name/${PORTNAME}/ \
		http://files.wittig.name/${PORTNAME}/

MAINTAINER=	alexander@wittig.name
COMMENT=	Interactive script for deinstalling leaf packages

LICENSE=	BSD2CLAUSE

NO_BUILD=	yes

PLIST_FILES=	sbin/pkg_rmleaves share/man/man1/pkg_rmleaves.1.gz

do-install:
	${INSTALL_SCRIPT} ${WRKSRC}/pkg_rmleaves ${STAGEDIR}${PREFIX}/sbin/pkg_rmleaves
	${INSTALL_MAN} ${WRKSRC}/pkg_rmleaves.1 ${STAGEDIR}${PREFIX}/share/man/man1

.include <bsd.port.mk>
