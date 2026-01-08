/* See LICENSE file for copyright and license details. */
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>

#include "../slstatus.h"
#include "../util.h"

     // TODO: some cool symbols
     char *demo = "";



const char *
RenderClockIcon(time_t t)
{
  char * clockIcon = "";
  char hour[3];
  strftime(hour, sizeof(hour), "%H", localtime(&t));

  if (strcmp(hour, "01") == 0 || strcmp(hour, "13") == 0) { clockIcon = ""; }
  if (strcmp(hour, "02") == 0 || strcmp(hour, "14") == 0) { clockIcon = ""; } else
  if (strcmp(hour, "03") == 0 || strcmp(hour, "15") == 0) { clockIcon = ""; } else
  if (strcmp(hour, "04") == 0 || strcmp(hour, "16") == 0) { clockIcon = ""; } else
  if (strcmp(hour, "05") == 0 || strcmp(hour, "17") == 0) { clockIcon = ""; } else
  if (strcmp(hour, "06") == 0 || strcmp(hour, "18") == 0) { clockIcon = ""; } else
  if (strcmp(hour, "07") == 0 || strcmp(hour, "19") == 0) { clockIcon = ""; } else
  if (strcmp(hour, "08") == 0 || strcmp(hour, "20") == 0) { clockIcon = ""; } else
  if (strcmp(hour, "09") == 0 || strcmp(hour, "21") == 0) { clockIcon = ""; } else
  if (strcmp(hour, "10") == 0 || strcmp(hour, "22") == 0) { clockIcon = ""; } else
  if (strcmp(hour, "11") == 0 || strcmp(hour, "23") == 0) { clockIcon = ""; } else
  if (strcmp(hour, "12") == 0 || strcmp(hour, "00") == 0) { clockIcon = ""; }

  return clockIcon;
}

const char *
RenderClockIconColor(time_t t)
{
  char * clockIcon = "";
  char hour[3];
  strftime(hour, sizeof(hour), "%H", localtime(&t));

  if (strcmp(hour, "01") == 0 || strcmp(hour, "13") == 0) { clockIcon = "🕐"; }
  if (strcmp(hour, "02") == 0 || strcmp(hour, "14") == 0) { clockIcon = "🕑"; } else
  if (strcmp(hour, "03") == 0 || strcmp(hour, "15") == 0) { clockIcon = "🕒"; } else
  if (strcmp(hour, "04") == 0 || strcmp(hour, "16") == 0) { clockIcon = "🕓"; } else
  if (strcmp(hour, "05") == 0 || strcmp(hour, "17") == 0) { clockIcon = "🕔"; } else
  if (strcmp(hour, "06") == 0 || strcmp(hour, "18") == 0) { clockIcon = "🕕"; } else
  if (strcmp(hour, "07") == 0 || strcmp(hour, "19") == 0) { clockIcon = "🕖"; } else
  if (strcmp(hour, "08") == 0 || strcmp(hour, "20") == 0) { clockIcon = "🕗"; } else
  if (strcmp(hour, "09") == 0 || strcmp(hour, "21") == 0) { clockIcon = "🕘"; } else
  if (strcmp(hour, "10") == 0 || strcmp(hour, "22") == 0) { clockIcon = "🕙"; } else
  if (strcmp(hour, "11") == 0 || strcmp(hour, "23") == 0) { clockIcon = "🕚"; } else
  if (strcmp(hour, "12") == 0 || strcmp(hour, "00") == 0) { clockIcon = "🕛"; }

  return clockIcon;
}

const char *
datetime()
{
  char *dateFmt = "📅 %F ";
  char *timeFmt = " %T";
     time_t t;

     t = time(NULL);

     char *clockIcon = RenderClockIconColor(t);

     int resultStringLen = strlen(dateFmt) + strlen(clockIcon) + strlen(timeFmt);

     char *newFmt = (char *)malloc(sizeof(char) * resultStringLen);

     strcpy(newFmt, dateFmt);
     strcat(newFmt, clockIcon);
     strcat(newFmt, timeFmt);
     
     if (!strftime(buf, sizeof(buf), newFmt, localtime(&t))) {
          warn("strftime: Result string exceeds buffer size");
          return NULL;
     }

     return buf;
}
