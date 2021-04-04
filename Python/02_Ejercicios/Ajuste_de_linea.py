import os
import os.path
import sys
import time

import pdb;

"""
regex1 = re.compile(r'^\t{1,}.*$')

In [6]: for line in lines:
   ...:     if bool(regex1.match(line)):
   ...:         print("Esto machea: %s" % line)
"""


DIRPATHS = [r'D:\workspace\biblab']

DISCARDED_EXT = ['.exe', '.pdf', '.jpg', '.png', '.svg',]
WRITE_ENABLE = False

SLEEP_TIME = 0.50  # segundos

LJUST1 = 12
LJUST2 = 115

def main():
    """
    """
    file_counter = 0
    modified_counter = 0

    for dirpath in DIRPATHS:
        for root, dirs, files in os.walk(dirpath):
            # if os.path.basename(root).find('.') == 0:
                # continue
            if any([name.find('.') == 0 for name in root.split('\\')]):
                continue

            print("\n%s %s" % ("Root Folder:".ljust(LJUST1), root))
            # pdb.set_trace()  # PDB
            for _file in files:
                if any([_file.rfind(extension) > -1 for extension in DISCARDED_EXT]):
                    continue

                filepath = os.path.join(root, _file)
                # print("%s %s" % ("File path:".ljust(LJUST1), filepath))
                # pdb.set_trace()  # PDB

                new_lines = None
                match_counter = 0
                # read file
                with open(filepath, 'r') as file_handle:
                    new_lines = list()
                    lines = file_handle.readlines()
                    for line in lines:
                        normalized_line = line.rstrip('\n')
                        if normalized_line != normalized_line.rstrip():
                            match_counter += 1
                            new_lines.append(normalized_line.rstrip() + '\n')
                        else:
                            new_lines.append(line)

                if WRITE_ENABLE and (match_counter > 0):
                    modified_counter += 1
                    # pdb.set_trace()  # PDB
                    with open(filepath, 'w') as file_handle:
                        file_handle.writelines(new_lines)

                if match_counter > 0:
                    print("%s %s:%s%4d lines" % ("File path:".ljust(LJUST1), "%s" % filepath, (LJUST2-len(filepath))*".", match_counter))
                    if SLEEP_TIME > 0: time.sleep(SLEEP_TIME)
                else:
                    print("%s %s" % ("File path:".ljust(LJUST1), filepath))

                file_counter += 1
            # End for

    print("%s %3d" % ("Files checked:".ljust(15), file_counter))
    print("%s %3d" % ("Files modified:".ljust(15), modified_counter))

    return
###End main ###


if __name__ == "__main__":
    """
    """
    sys.exit( main() )
