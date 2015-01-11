<?php

require_once("AbstractFactory.class.php");
require_once("ProductA2.class.php");
require_once("ProductB2.class.php");

class ConcreteFactory2 extends AbstractFactory
{
    public function CreateProductA()
    {
        return new ProductA2();
    }

    public function CreateProductB()
    {
        return new ProductB2();
    }
}

