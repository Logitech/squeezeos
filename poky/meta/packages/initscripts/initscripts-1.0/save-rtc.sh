#! /bin/sh
### BEGIN INIT INFO
# Provides:          save-rtc
# Required-Start:
# Required-Stop:     $local_fs hwclock
# Default-Start:     S
# Default-Stop:      0 6
# Short-Description: Store system clock into file
# Description:       
### END INIT INFO

# Update the timestamp
date +%Y%m%d%2H%2M > /etc/timestamp2
