#ifndef ABOUT_H
#define ABOUT_H
/*
    roxterm - GTK+ 2.0 terminal emulator with tabs
    Copyright (C) 2004 Tony Houghton <h@realh.co.uk>

    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program; if not, write to the Free Software
    Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
*/


#ifndef DEFNS_H
#include "defns.h"
#endif

#if GTK_CHECK_VERSION(2,25,0)
#define USE_ACTIVATE_LINK 1
#else
#define USE_ACTIVATE_LINK 0
#endif

void about_dialog_show(GtkWindow *parent,
#if USE_ACTIVATE_LINK
        gboolean (*uri_handler)(GtkAboutDialog *, char *, gpointer),
#else
        AboutDialogActivateLinkFunc www_hook,
        AboutDialogActivateLinkFunc email_hook,
#endif
        gpointer hook_data
);

#endif /* ABOUT_H */

/* vi:set sw=4 ts=4 noet cindent cino= */
