<?php

require_once("AbstractFactory.class.php");
require_once("ProductA1.class.php");
require_once("ProductB1.class.php");

class ConcreteFactory1 extends AbstractFactory
{
    public function CreateProductA()
    {
        return new ProductA1();
    }

    public function CreateProductB()
    {
        return new ProductB1();
    }
}

