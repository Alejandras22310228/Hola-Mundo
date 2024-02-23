@startuml pow

Class Mascota{
- vida:int
+ Comer(alimento:Alimento)
}

Class Alimento{
- energia :int
+ExtraerEnergia()
}
Mascota o-- Alimento


@enduml