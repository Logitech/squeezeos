/*
 * Copyright 2004-2007 Freescale Semiconductor, Inc. All Rights Reserved.
 */

/*
 * The code contained herein is licensed under the GNU General Public
 * License. You may obtain a copy of the GNU General Public License
 * Version 2 or later at the following locations:
 *
 * http://www.opensource.org/licenses/gpl-license.html
 * http://www.gnu.org/copyleft/gpl.html
 */

/*
 * The code contained herein is licensed under the GNU General Public
 * License. You may obtain a copy of the GNU General Public License
 * Version 2 or later at the following locations:
 *
 * http://www.opensource.org/licenses/gpl-license.html
 * http://www.gnu.org/copyleft/gpl.html
 */

/*!
 * @file dvfs_dptc_table_mx31_rev2.h
 *
 * @brief MX31 dvfs & dptc table file for MX31 2.0
 *
 * @ingroup PM_MX31
 */
#ifndef __DVFS_DPTC_TABLE_MX3_REV2_H__
#define __DVFS_DPTC_TABLE_MX3_REV2_H__

#define NUM_OF_FREQS 4
#define NUM_OF_WP    17

/*!
 * Default DPTC table definition.
 * The table doesn't use PLL switch, because on DDR boards
 * PLL switch is not possible due to HW issue.
 * For SDR boards new table can be loaded.
 *
 * The table keeps the same voltage of 3.5V for frequencies lower than 399MHz.
 * Theoretically we don't need DPTC for these frequencies,
 * but we have to keep DPTC enabled for fluent DVFS switching
 * back to high frequency.
 */
static char *default_table_str_rev2 = "WORKING POINT 17\n\
\n\
# mc13783 switcher SW values for each working point\n\
# The first line is for WP of highest voltage\n\
# The first column is for highest frequency\n\
#  SW1A      SW1A DVS   SW1B DVS   SW1B STANDBY\n\
WP 0x1d      0xc        0xc        0xc\n\
WP 0x1c      0xc        0xc        0xc\n\
WP 0x1b      0xc        0xc        0xc\n\
WP 0x1a      0xc        0xc        0xc\n\
WP 0x19      0xc        0xc        0xc\n\
WP 0x18      0xc        0xc        0xc\n\
WP 0x17      0xc        0xc        0xc\n\
WP 0x16      0xc        0xc        0xc\n\
WP 0x15      0xc        0xc        0xc\n\
WP 0x14      0xc        0xc        0xc\n\
WP 0x13      0xc        0xc        0xc\n\
WP 0x12      0xc        0xc        0xc\n\
WP 0x11      0xc        0xc        0xc\n\
WP 0x10      0xc        0xc        0xc\n\
WP 0xf       0xc        0xc        0xc\n\
WP 0xe       0xc        0xc        0xc\n\
WP 0xd       0xc        0xc        0xc\n\
\n\
#    pll_sw_up pll_sw_down pdr_up     pdr_down    pll_up     pll_down   vscnt\n\
# 532MHz\n\
FREQ 0         1           0xff871e58 0xff871650 0x0033280c 0x00331c23  1\n\
# 399MHz\n\
FREQ 1         1           0xff871e58 0xff871e59 0x0033280c 0x0033280c  4\n\
# 266MHz\n\
FREQ 0         0           0xff871e58 0xff871e5b 0x0033280c 0x0033280c  4\n\
# 133MHz\n\
FREQ 0         0           0xff871e58 0xff871e5b 0x0033280c 0x0033280c  4\n\
\n\
# 532MHz\n\
DCVR 0xffc00000 0x95c00000 0xffc00000 0xe5800000\n\
DCVR 0xffc00000 0x95e3e8e4 0xffc00000 0xe5b6fda0\n\
DCVR 0xffc00000 0x95e3e8e4 0xffc00000 0xe5b6fda0\n\
DCVR 0xffc00000 0x95e3e8e8 0xffc00000 0xe5f70da4\n\
DCVR 0xffc00000 0x9623f8e8 0xffc00000 0xe6371da8\n\
DCVR 0xffc00000 0x966408f0 0xffc00000 0xe6b73db0\n\
DCVR 0xffc00000 0x96e428f4 0xffc00000 0xe7776dbc\n\
DCVR 0xffc00000 0x976448fc 0xffc00000 0xe8379dc8\n\
DCVR 0xffc00000 0x97e46904 0xffc00000 0xe977ddd8\n\
DCVR 0xffc00000 0x98a48910 0xffc00000 0xeab81de8\n\
DCVR 0xffc00000 0x9964b918 0xffc00000 0xebf86df8\n\
DCVR 0xffc00000 0xffe4e924 0xffc00000 0xfff8ae08\n\
DCVR 0xffc00000 0xffe5192c 0xffc00000 0xfff8fe1c\n\
DCVR 0xffc00000 0xffe54938 0xffc00000 0xfff95e2c\n\
DCVR 0xffc00000 0xffe57944 0xffc00000 0xfff9ae44\n\
DCVR 0xffc00000 0xffe5b954 0xffc00000 0xfffa0e58\n\
DCVR 0xffc00000 0xffe5e960 0xffc00000 0xfffa6e70\n\
\n\
# 266MHz\n\
DCVR 0xffc00000 0x95c00000 0xffc00000 0xe5800000\n\
DCVR 0xffc00000 0x95c8f238 0xffc00000 0xe58dc368\n\
DCVR 0xffc00000 0x95c8f238 0xffc00000 0xe58dc368\n\
DCVR 0xffc00000 0x95c8f238 0xffc00000 0xe5cdc368\n\
DCVR 0xffc00000 0x9609023c 0xffc00000 0xe60dc36c\n\
DCVR 0xffc00000 0x9649023c 0xffc00000 0xe68dd36c\n\
DCVR 0xffc00000 0x96c9023c 0xffc00000 0xe74dd370\n\
DCVR 0xffc00000 0x97491240 0xffc00000 0xe80de374\n\
DCVR 0xffc00000 0x97c92240 0xffc00000 0xe94df374\n\
DCVR 0xffc00000 0x98892244 0xffc00000 0xea8e0378\n\
DCVR 0xffc00000 0x99493248 0xffc00000 0xebce137c\n\
DCVR 0xffc00000 0xffc93248 0xffc00000 0xffce3384\n\
DCVR 0xffc00000 0xffc9424c 0xffc00000 0xffce4388\n\
DCVR 0xffc00000 0xffc95250 0xffc00000 0xffce538c\n\
DCVR 0xffc00000 0xffc96250 0xffc00000 0xffce7390\n\
DCVR 0xffc00000 0xffc97254 0xffc00000 0xffce8394\n\
DCVR 0xffc00000 0xffc98258 0xffc00000 0xffcea39c\n\
\n\
# 133MHz\n\
DCVR 0xffc00000 0x95c00000 0xffc00000 0xe5800000\n\
DCVR 0xffc00000 0x95c8f238 0xffc00000 0xe58dc368\n\
DCVR 0xffc00000 0x95c8f238 0xffc00000 0xe58dc368\n\
DCVR 0xffc00000 0x95c8f238 0xffc00000 0xe5cdc368\n\
DCVR 0xffc00000 0x9609023c 0xffc00000 0xe60dc36c\n\
DCVR 0xffc00000 0x9649023c 0xffc00000 0xe68dd36c\n\
DCVR 0xffc00000 0x96c9023c 0xffc00000 0xe74dd370\n\
DCVR 0xffc00000 0x97491240 0xffc00000 0xe80de374\n\
DCVR 0xffc00000 0x97c92240 0xffc00000 0xe94df374\n\
DCVR 0xffc00000 0x98892244 0xffc00000 0xea8e0378\n\
DCVR 0xffc00000 0x99493248 0xffc00000 0xebce137c\n\
DCVR 0xffc00000 0xffc93248 0xffc00000 0xffce3384\n\
DCVR 0xffc00000 0xffc9424c 0xffc00000 0xffce4388\n\
DCVR 0xffc00000 0xffc95250 0xffc00000 0xffce538c\n\
DCVR 0xffc00000 0xffc96250 0xffc00000 0xffce7390\n\
DCVR 0xffc00000 0xffc97254 0xffc00000 0xffce8394\n\
DCVR 0xffc00000 0xffc98258 0xffc00000 0xffcea39c\n\
\n\
# 133MHz\n\
DCVR 0xffc00000 0x95c00000 0xffc00000 0xe5800000\n\
DCVR 0xffc00000 0x95c8f238 0xffc00000 0xe58dc368\n\
DCVR 0xffc00000 0x95c8f238 0xffc00000 0xe58dc368\n\
DCVR 0xffc00000 0x95c8f238 0xffc00000 0xe5cdc368\n\
DCVR 0xffc00000 0x9609023c 0xffc00000 0xe60dc36c\n\
DCVR 0xffc00000 0x9649023c 0xffc00000 0xe68dd36c\n\
DCVR 0xffc00000 0x96c9023c 0xffc00000 0xe74dd370\n\
DCVR 0xffc00000 0x97491240 0xffc00000 0xe80de374\n\
DCVR 0xffc00000 0x97c92240 0xffc00000 0xe94df374\n\
DCVR 0xffc00000 0x98892244 0xffc00000 0xea8e0378\n\
DCVR 0xffc00000 0x99493248 0xffc00000 0xebce137c\n\
DCVR 0xffc00000 0xffc93248 0xffc00000 0xffce3384\n\
DCVR 0xffc00000 0xffc9424c 0xffc00000 0xffce4388\n\
DCVR 0xffc00000 0xffc95250 0xffc00000 0xffce538c\n\
DCVR 0xffc00000 0xffc96250 0xffc00000 0xffce7390\n\
DCVR 0xffc00000 0xffc97254 0xffc00000 0xffce8394\n\
DCVR 0xffc00000 0xffc98258 0xffc00000 0xffcea39c\n\
";

#endif