PORTNAME=	actioncable
PORTVERSION=	5.2.8.1
CATEGORIES=	www rubygems
MASTER_SITES=	RG
PKGNAMESUFFIX=	52

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Integrated WebSockets for Rails
WWW=		https://rubyonrails.org/ \
		https://github.com/rails/rails/tree/main/actioncable

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/MIT-LICENSE

RUN_DEPENDS=	rubygem-actionpack52>=${PORTVERSION}:www/rubygem-actionpack52 \
		rubygem-nio4r>=2.0<3:devel/rubygem-nio4r \
		rubygem-websocket-driver>=0.6.1:www/rubygem-websocket-driver

USES=		gem

NO_ARCH=	yes

PORTSCOUT=	limit:^5\.2\.

.include <bsd.port.mk>
