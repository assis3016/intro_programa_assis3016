function criarFormularioCompartilhavel() {
    var form = FormApp.create('Formulário Público');
  
    form.setDescription('Participe da nossa pesquisa!');
  
    form.addMultipleChoiceItem()
        .setTitle('Você gostou do nosso serviço?')
        .setChoiceValues(['Sim', 'Não'])
        .setRequired(true);
  
    var formUrl = form.getPublishedUrl(); // <-- link para enviar às pessoas
    Logger.log('Link para compartilhar com os usuários: ' + formUrl);
}

// Ensure this script is run in the Google Apps Script environment.
  