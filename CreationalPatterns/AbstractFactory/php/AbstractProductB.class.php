<?php

require_once("AbstractProductA.class.php");

abstract class AbstractProductB
{
    abstract public function Interact(AbstractProductA $a);
}

