<?php

require_once("ConcreteFactory1.class.php");
require_once("ConcreteFactory2.class.php");
require_once("Client.class.php");

$factory1 = new ConcreteFactory1();
$client1 = new Client($factory1);
$client1->Run();

$factory2 = new ConcreteFactory2();
$client2 = new Client($factory2);
$client2->Run();

