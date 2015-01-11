<?php

abstract class MonsterBuilder
{
    public function __construct()
    {
        $this->monster = new Monster();
    }

    public $monster;

    abstract public function buildBrain();
    abstract public function buildMotility();
    abstract public function buildPower();
}

