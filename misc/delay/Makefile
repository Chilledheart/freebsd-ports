PORTNAME=	delay
PORTVERSION=	1.6
PORTREVISION=	1
CATEGORIES=	misc
MASTER_SITES=	http://onegeek.org/~tom/software/delay/dl/ \
		http://utenti.gufi.org/~gmarco/files/distfiles/

MAINTAINER=	gmarco@giovannelli.it
COMMENT=	Delay program with feedback to the user

USES=		ncurses
GNU_CONFIGURE=	yes
CONFIGURE_ENV=	ac_cv_header_curses_h=yes

PLIST_FILES=	bin/delay share/man/man1/delay.1.gz

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/delay ${STAGEDIR}${PREFIX}/bin
	${INSTALL_MAN} ${WRKSRC}/delay.1 ${STAGEDIR}${PREFIX}/share/man/man1

.include <bsd.port.mk>
