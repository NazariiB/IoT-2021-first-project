package com.company;

public class Main {
    public static void main(String[] args) {
        Ship steamMachine = Steamship.createShip();
        Ship ferry = Ferry.createShip();
        Ship riverTram = RiverTram.createShip();
        Ship motorShip = MotorShip.createShip();
        Ship hydrofoilShip = HydrofoilShip.createShip();
        Ship hovercraft = Hovercraft.createShip();
    }
}
