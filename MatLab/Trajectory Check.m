%%%%%%%%%%%%%% 4R Robotic Arm Forward Kinematics %%%%%%%%%%

% Longitudes de los eslabones
L1 = 10; 
L2 = 10;
L3 = 10;
L4 = 10;
d3 = 2;
d4 = 2;

% Parámetros DH: [theta d a alpha]
DH = [0 L1 0 pi/2;
      0 0 L2 0;
      0 d3 L3 0;
      0 d4 L4 0];

% Crear los eslabones del robot
C(1) = Link('revolute', 'd', DH(1,2), 'a', DH(1,3), 'alpha', DH(1,4));
C(2) = Link('revolute', 'd', DH(2,2), 'a', DH(2,3), 'alpha', DH(2,4));
C(3) = Link('revolute', 'd', DH(3,2), 'a', DH(3,3), 'alpha', DH(3,4));
C(4) = Link('revolute', 'd', DH(4,2), 'a', DH(4,3), 'alpha', DH(4,4));

% Crear el objeto del robot
RR = SerialLink(C, 'name', '4R Robotic Arm');

% Ángulos iniciales y finales (en radianes)
qi = rad2deg([11 180 41.4 18.4]);
qd = rad2deg([76.4 16.5 28.8 -36]);

% Trayectoria articular
qt = jtraj(qi, qd, 5);

% Posiciones cartesiana inicial y final
Ti = RR.fkine(qi);
Td = RR.fkine(qd);

disp('Pose deseada Td:');
disp(Td);

% Graficar el movimiento
RR.plot(qd);
