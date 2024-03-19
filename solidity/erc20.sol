pragma solidity ^0.8.9;

import "./openzeppelin-solidity/token/ERC20/ERC20.sol";

contract MyToken is ERC20 {
    string public name = "My Token";
    string public symbol = "MTKN";
    uint8 public decimals = 18;
    
     constructor() ERC20(name, symbol) {}
    
    function mint(address to, uint256 amount) public {
        _mint(to, amount);
    }
}
