openssl enc -v -P  -p -nosalt -aes-256-cbc -K 4e6f772077652061726520656e676167656420696e2061206772656174206369 -iv 23ae14f4a7b2dc7f1dd89cf6f07e4048 -in work.txt -out  secretwork.enc
bufsize=8192


openssl enc -d -v -P  -p -nosalt -aes-256-cbc -K 4e6f772077652061726520656e676167656420696e2061206772656174206369 -iv 23ae14f4a7b2dc7f1dd89cf6f07e4048 -in secretwork.enc -out text.plain1dec
bufsize=8192