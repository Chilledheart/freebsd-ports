PORTNAME=	tty-reader
PORTVERSION=	0.9.0
PORTREVISION=	1
CATEGORIES=	devel rubygems
MASTER_SITES=	RG

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Methods for processing keyboard input
WWW=		https://ttytoolkit.org/ \
		https://github.com/piotrmurach/tty-reader

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

RUN_DEPENDS=	rubygem-tty-cursor>=0.7<1:devel/rubygem-tty-cursor \
		rubygem-tty-screen>=0.8<1:devel/rubygem-tty-screen \
		rubygem-wisper>=2.0:devel/rubygem-wisper

USES=		gem

NO_ARCH=	yes

.include <bsd.port.mk>
