<?php

class Laboratory
{
    public function createMonster(MonsterBuilder $builder)
    {
        $builder->buildBrain();
        $builder->buildMotility();
        $builder->buildPower();
    }
}
