/****************************************************************************
 ****************************************************************************
 ***
 ***   This header was automatically generated from a Linux kernel header
 ***   of the same name, to make information necessary for userspace to
 ***   call into the kernel available to libc.  It contains only constants,
 ***   structures, and macros generated from the original header, and thus,
 ***   contains no copyrightable information.
 ***
 ***   To edit the content of this header, modify the corresponding
 ***   source file (e.g. under external/kernel-headers/original/) then
 ***   run bionic/libc/kernel/tools/update_all.py
 ***
 ***   Any manual change here will be lost the next time this script will
 ***   be run. You've been warned!
 ***
 ****************************************************************************
 ****************************************************************************/
#ifndef __LINUX_TC_TUNNEL_KEY_H
#define __LINUX_TC_TUNNEL_KEY_H
#include <linux/pkt_cls.h>
#define TCA_ACT_TUNNEL_KEY 17
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define TCA_TUNNEL_KEY_ACT_SET 1
#define TCA_TUNNEL_KEY_ACT_RELEASE 2
struct tc_tunnel_key {
  tc_gen;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  int t_action;
};
enum {
  TCA_TUNNEL_KEY_UNSPEC,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  TCA_TUNNEL_KEY_TM,
  TCA_TUNNEL_KEY_PARMS,
  TCA_TUNNEL_KEY_ENC_IPV4_SRC,
  TCA_TUNNEL_KEY_ENC_IPV4_DST,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  TCA_TUNNEL_KEY_ENC_IPV6_SRC,
  TCA_TUNNEL_KEY_ENC_IPV6_DST,
  TCA_TUNNEL_KEY_ENC_KEY_ID,
  TCA_TUNNEL_KEY_PAD,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  TCA_TUNNEL_KEY_ENC_DST_PORT,
  __TCA_TUNNEL_KEY_MAX,
};
#define TCA_TUNNEL_KEY_MAX (__TCA_TUNNEL_KEY_MAX - 1)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
