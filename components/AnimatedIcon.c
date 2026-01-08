/* See LICENSE file for copyright and license details. */
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>

#include "../slstatus.h"
#include "../util.h"

static unsigned int CurrentFrame = 0;
static char *AnimatedIconFrames[] = {
  "", "", "", "", "", ""
};


const char *
AnimatedIcon(const char *unused)
{
  if (++CurrentFrame > 5) {
    CurrentFrame = 0;
  }

  return AnimatedIconFrames[CurrentFrame];
}
