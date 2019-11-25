#!/bin/bash

function addRoot()
{
  ROOT=$1
  PATH=$PATH:$ROOT/bin
  LD_LIBRARY_PATH=$LD_LIBRARY_PATH:$ROOT/lib

  if [ -d $ROOT/etc/bash_completion.d/ ]
  then
    for FILE in $(ls $ROOT/etc/bash_completion.d/)
    do
      source $ROOT/etc/bash_completion.d/$FILE
    done
  fi
}

addRoot ~/ign/prog/git
addRoot ~/ign/prog/libevent
addRoot ~/ign/prog/screen
addRoot ~/ign/prog/tmux
