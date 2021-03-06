/*this library is free software; you can redistribute it and/or modify it under
the terms of the GNU Lesser General Public License as published by the
Free Software Foundation; either version 2.1 of the License, or (at your
option) any later version. (See <http://www.gnu.org/copyleft/lesser.html>.)
        
This library is distributed in the hope that it will be useful, but WITHOUT
ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
FOR A PARTICULAR PURPOSE.  See the GNU Lesser General Public License for
more details.

You should have received a copy of the GNU Lesser General Public License
along with this library; if not, write to the Free Software Foundation, Inc.,
59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
**********/
#ifndef _RTSPSERVER_H
#define _RTSPSERVER_H
        
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <errno.h>

struct rtsp_auth {
        struct rtsp_auth *next;
        struct rtsp_auth *prev;
        char username[128];
        char password[128];
};

struct rtsp_auth *add_auth_id(char *username, char *password);
void del_auth_id(char *username, char *password);
int RtspServerStart();
#endif
