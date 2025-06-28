connect() macro for signals and slots
disconnect() disconnects that slot
    connect(ui->horizontalSlider, SIGNAL(valueChanged(int)), ui->progressBar, SLOT(setValue(int)));

Can have multiple signals to different slots
