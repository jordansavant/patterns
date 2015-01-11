<?php

require_once("MonsterBuilder.class.php");
require_once("Monster.class.php");

class OgreBuilder extends MonsterBuilder
{
    public function buildBrain()
    {
        $this->monster->brain = "Slow but resolute";
    }

    public function buildMotility()
    {
        $this->monster->motility = "Upright and walking";
    }

    public function buildPower()
    {
        $this->monster->power = "Super strength and martial prowess";
    }
}

