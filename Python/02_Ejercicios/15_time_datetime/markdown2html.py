#!/usr/bin/python
# -*- coding: latin-1 -*-
"""
"""

import sys
import markdown
import codecs

from mdx_gfm import GithubFlavoredMarkdownExtension

FILENAME = "time.md"

def main():
    """
    """
    # Read input MarkDown document
    with codecs.open(FILENAME,'r',encoding='utf8') as f:
        text_input = f.read()

    # Convert text_input to HTML
    html = markdown.markdown(text_input, extensions=[GithubFlavoredMarkdownExtension()])

    with codecs.open('time.html', 'w', encoding='utf8') as f:
        f.write(html)
###End main ###


if __name__ == "__main__":
    """
    """
    sys.exit( main() )
