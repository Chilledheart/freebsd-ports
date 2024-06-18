PORTNAME=	yass
PORTVERSION=	1.11.2
CATEGORIES=	net

MAINTAINER=	keeyou-cn@outlook.com
COMMENT=	Lightweight and Secure http/socks4/socks5 Proxy
WWW=		https://github.com/Chilledheart/yass
MASTER_SITES=	https://github.com/Chilledheart/yass/releases/download/${PORTVERSION}/
PATCH_SITES=	https://github.com/Chilledheart/yass/commit/
PATCHFILES=	8c9e581a410ad4a0114968dc047e1b6434dd4aa3.patch:-p1

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/LICENSE

USES=		cmake desktop-file-utils gettext perl5 go:no_targets python:run tar:bzip2 gnome
USE_GNOME=	gtk30

USE_LDCONFIG=	yes

BUILD_DEPENDS=	${PYTHON_VERSION}:lang/python${PYTHON_SUFFIX}

LIB_DEPENDS=	libmbedtls.so:security/mbedtls \
	libcares.so:dns/c-ares \
	libnghttp2.so:www/libnghttp2 \
	libfontconfig.so:x11-fonts/fontconfig

DOCSDIR=	${PREFIX}/share/doc/yass

TEST_LIB_DEPENDS=	libcurl.so:ftp/curl

CMAKE_ARGS+=	-DCMAKE_INSTALL_SYSCONFDIR=/usr/local/etc
CMAKE_ARGS+=	-DBUILD_SHARED_LIBS=off
CMAKE_ARGS+=	-DUSE_BUILTIN_CA_BUNDLE_CRT=off
CMAKE_ARGS+=	-DUSE_LIBCXX=off
CMAKE_ARGS+=	-DENABLE_GOLD=off
CMAKE_ARGS+=	-DCLI=off
CMAKE_ARGS+=	-DSERVER=off
CMAKE_ARGS+=	-DGUI=on
CMAKE_ARGS+=	-DUSE_GTK4=off
CMAKE_ARGS+=	-DUSE_QT5=off
CMAKE_ARGS+=	-DUSE_QT6=off
CMAKE_ARGS+=	-DBUILD_TESTS=off
CMAKE_ARGS+=	-DUSE_TCMALLOC=off
CMAKE_ARGS+=	-DUSE_MIMALLOC=off
CMAKE_ARGS+=	-DUSE_SYSTEM_MBEDTLS=on
CMAKE_ARGS+=	-DUSE_SYSTEM_ZLIB=on
CMAKE_ARGS+=	-DUSE_SYSTEM_CARES=on
CMAKE_ARGS+=	-DUSE_SYSTEM_NGHTTP2=on

.include <bsd.port.mk>
