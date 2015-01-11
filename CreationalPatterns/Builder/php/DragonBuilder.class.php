<?php

require_once("MonsterBuilder.class.php");
require_once("Monster.class.php");

class DragonBuilder extends MonsterBuilder
{
    public function buildBrain()
    {
        $this->monster->brain = "Wise and intelligent";
    }

    public function buildMotility()
    {
        $this->monster->motility = "Powerfully limbed with mighty wings to fly";
    }

    public function buildPower()
    {
        $this->monster->power = "A breath of flames";
    }
}

