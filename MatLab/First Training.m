%%%%%%%%%%%%%% 2R Robotic Arm Forward Kinematics%%%%%%%%%

% Longitudes de los eslabones
L1 = 100; 
L2 = 100;
L3 = 100;
L4 = 100;
d3 = 20;
d4 = 20;

% Par?metros DH en el orden: theta, d, a, alpha
DH = [0 L1 0 pi/2;
      0 0 L3 0
      0 d3 L3 0
      0 d4 L4 0];

% Crear los eslabones del robot
C(1) = Link('revolute', 'd', DH(1,2), 'a', DH(1,3), 'alpha', DH(1,4));
C(2) = Link('revolute', 'd', DH(2,2), 'a', DH(2,3), 'alpha', DH(2,4));
C(3) = Link('revolute', 'd', DH(3,2), 'a', DH(3,3), 'alpha', DH(3,4));
C(4) = Link('revolute', 'd', DH(4,2), 'a', DH(4,3), 'alpha', DH(4,4));
% Crear el objeto del robot
RR = SerialLink(C, 'name', '4R Robotic Arm');

RR.plot([0 0 0 0]);  % Muestra el robot
RR.plot([pi/2 pi/2 pi/2 pi/2]);  % Muestra el robot