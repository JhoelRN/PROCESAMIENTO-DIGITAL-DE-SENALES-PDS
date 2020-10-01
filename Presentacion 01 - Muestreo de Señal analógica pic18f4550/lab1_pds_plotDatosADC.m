clear all; close all;
x=dlmread('DATOS__ADC.txt');
x=x';
x1=x(1,:);
figure(1);
stem(x1);grid;
x2=x(2,:);
figure(2);
plot(x2);grid;
