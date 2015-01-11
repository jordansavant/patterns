<?php

require_once("AbstractProductB.class.php");
require_once("AbstractProductA.class.php");

class ProductB2 extends AbstractProductB
{
    public function Interact(AbstractProductA $a)
    {
        echo get_class($this)." interacts with ".get_class($a)."\n";
    }
}

