/*
   Copyright 2012 David Malcolm <dmalcolm@redhat.com>
   Copyright 2012 Red Hat, Inc.

   This is free software: you can redistribute it and/or modify it
   under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful, but
   WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see
   <http://www.gnu.org/licenses/>.
*/

#include "proposed-plugin-api/gcc-rtl.h"

#include <gcc-plugin.h>
#include "tree.h"
#include "rtl.h"

GCC_IMPLEMENT_PUBLIC_API(void)
GccRtlInsnI_MarkInUse(GccRtlInsnI insn)
{
    gt_ggc_mx_rtx_def(insn.inner);
}

GCC_IMPLEMENT_PRIVATE_API(struct GccRtlInsnI)
GccPrivate_make_RtlInsnI(struct rtx_def *inner)
{
    struct GccRtlInsnI result;
    result.inner = inner;
    return result;
}

/*
  PEP-7
Local variables:
c-basic-offset: 4
indent-tabs-mode: nil
End:
*/