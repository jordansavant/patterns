<?php

require_once("AbstractFactory.class.php");
require_once("AbstractProductA.class.php");
require_once("AbstractProductB.class.php");

class Client
{
    public function __construct(AbstractFactory $factory)
    {
        $this->abstractProductA = $factory->CreateProductA();
        $this->abstractProductB = $factory->CreateProductB();
    }

    public $abstractProductA;
    public $abstractProductB;

    public function Run()
    {
        $this->abstractProductB->Interact($this->abstractProductA);
    }
}

