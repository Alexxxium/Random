# Random

Получение рандомных значений путем взятия адреса памяти из кучи с помощью вспомогательной программы,
после закрытия которой куча перераспределяется и таким образом каждый новый ее запуск запрашивает рандомный адрес.
+ также используется системное время для улучшения результата

Приложено сравнение на корреляцию с ГПСЧ из стандартной библиотеки <random>
  
Данный алгорим менее предсказуем, однако, и менее производителен.
