PORTNAME=	yass
PORTVERSION=	1.16.0
CATEGORIES=	net

MAINTAINER=	keeyou-cn@outlook.com
COMMENT=	Lightweight and Secure http/socks4/socks5 Proxy
WWW=		https://github.com/Chilledheart/yass
MASTER_SITES=	https://github.com/Chilledheart/yass/releases/download/${PORTVERSION}/

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/LICENSES/GPL-2.0

FLAVORS=	console gtk3 gtk4 qt5 qt6
FLAVOR?=	${FLAVORS:[1]}
# Register conflicts with all other flavors
CONFLICTS_INSTALL=	${FLAVORS:N${FLAVOR}:S/^/yass-/}

.for f in ${FLAVORS:Nconsole}
${f}_PKGNAMESUFFIX=	-${f}
.endfor

USES=		cmake perl5 go:no_targets python:run tar:zst

USE_LDCONFIG=	yes

BUILD_DEPENDS=	${PYTHON_VERSION}:lang/python${PYTHON_SUFFIX}

RUN_DEPENDS=	ca_root_nss>0:security/ca_root_nss

LIB_DEPENDS=	libmbedcrypto.so:security/mbedtls3 \
	libjsoncpp.so:devel/jsoncpp \
	libcares.so:dns/c-ares \
	libnghttp2.so:www/libnghttp2

DOCSDIR=	${PREFIX}/share/doc/yass

TEST_LIB_DEPENDS=	libcurl.so:ftp/curl

CMAKE_ARGS+=	-DCMAKE_INSTALL_SYSCONFDIR=${PREFIX}/etc
CMAKE_ARGS+=	-DBUILD_SHARED_LIBS=off
CMAKE_ARGS+=	-DUSE_BUILTIN_CA_BUNDLE_CRT=off
CMAKE_ARGS+=	-DUSE_LIBCXX=off
CMAKE_ARGS+=	-DSERVER=off
CMAKE_ARGS+=	-DUSE_TCMALLOC=off
CMAKE_ARGS+=	-DUSE_MIMALLOC=off
CMAKE_ARGS+=	-DUSE_MBEDTLS=on
CMAKE_ARGS+=	-DUSE_SYSTEM_MBEDTLS=on
CMAKE_ARGS+=	-DUSE_ZLIB=on
CMAKE_ARGS+=	-DUSE_SYSTEM_ZLIB=on
CMAKE_ARGS+=	-DUSE_CARES=on
CMAKE_ARGS+=	-DUSE_SYSTEM_CARES=on
CMAKE_ARGS+=	-DUSE_SYSTEM_NGHTTP2=on
CMAKE_ARGS+=	-DUSE_JSONCPP=on
CMAKE_ARGS+=	-DUSE_SYSTEM_JSONCPP=on

CMAKE_ARGS+=	-DBUILD_TESTS=off
CMAKE_TESTING_ON=	BUILD_TESTS
CMAKE_TESTING_TARGET=	check

.if ${FLAVOR:U} == console
CMAKE_ARGS+=	-DCLI=on
CMAKE_ARGS+=	-DGUI=off
.else
CMAKE_ARGS+=	-DCLI=off
CMAKE_ARGS+=	-DGUI=on
USES+=		desktop-file-utils
.endif

.if ${FLAVOR:U} == gtk3
USES+=		gettext gnome
USE_GNOME=	glib20 gtk30 cairo pango
LIB_DEPENDS+=	libfontconfig.so:x11-fonts/fontconfig
.elif ${FLAVOR:U} == gtk4
USES+=		gettext gnome
USE_GNOME=	glib20 gtk40 cairo pango
CMAKE_ARGS+=	-DUSE_GTK4=on
LIB_DEPENDS+=	libfontconfig.so:x11-fonts/fontconfig
.elif ${FLAVOR:U} == qt5
USES+=		qt:5
USE_QT=		core gui widgets buildtools:build qmake:build
CMAKE_ARGS+=	-DUSE_QT5=on
.elif ${FLAVOR:U} == qt6
USES+=		qt:6
USE_QT=		base
CMAKE_ARGS+=	-DUSE_QT6=on
.endif

console_PLIST=	${.CURDIR}/pkg-plist-console
gtk3_PLIST=	${.CURDIR}/pkg-plist-gtk
gtk4_PLIST=	${.CURDIR}/pkg-plist-gtk
qt5_PLIST=	${.CURDIR}/pkg-plist-qt
qt6_PLIST=	${.CURDIR}/pkg-plist-qt

.include <bsd.port.mk>
