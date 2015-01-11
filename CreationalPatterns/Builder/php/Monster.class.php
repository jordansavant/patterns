<?php

class Monster
{
    public $brain;
    public $motility;
    public $power;

    public function __toString()
    {
        return "Brain: $this->brain\nMovement: $this->motility\nPower: $this->power";
    }
}

