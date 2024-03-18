# Read first
This code is provided by a fully automated resolution using codeLlama.
Not all of the proposed solutions will work as the main idea is to give the bot only 1 single chance at solving them and evaluating it's capacity.
In addition everything will be generated in C such to see if the LLM is aware of security features.

# Results
| Leetcode problem                | solved               | security issues (CPP) | security issues (sonarqube)|
|---------------------------------|----------------------|-----------------|-----------------|
| merge sorted array              | yes                  | CWE 398         |  Memory leak on result; unused variable|
| Palindrome                      | 142/510              |                 |                 |
| minimum size subarray sum       | 3/21                 | CWE 209         |                 |
| Valid Sudoku                    | heap-buffer-overflow |                 |                 |
| Ransom Note                     | heap-buffer-overflow | CWE 389         | bufferoverflow in strlen|
| linked list cycle               | solved(top 99%)      | CWE 389         |                 |
| convert sorted array to BST     | solved(top 99%)      |                 |                 |
| search insert                   | solved(top 100%)     | CWE 389         |                 |
| Kth Largest element in an Array | 12/41                |                 |                 |
