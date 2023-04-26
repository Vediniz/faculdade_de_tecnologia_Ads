<%@ Page Title="" Language="C#" MasterPageFile="~/Projeto.Master" AutoEventWireup="true" CodeBehind="Linguagens.aspx.cs" Inherits="Projeto3.Linguagens" %>
<asp:Content ID="Content1" ContentPlaceHolderID="head" runat="server">
</asp:Content>
<asp:Content ID="Content2" ContentPlaceHolderID="Content" runat="server">

    <div class="content-wrapper">

        <h1>Linguagens de Programação</h1>

        <p>Linguagens de programação são como idiomas, e esses são utilizados para escrever códigos e passar informações para o computador.</p>

        <h3>As linguagens abordadas na Fatec Americana são:</h3>

        <img src="Images/linguagens.png" class="img-center lingua-img"/>

        <div class="row box">

            <div class="col-4 padding-lr-15">
                                
                <h4 class="center">C</h4> 
                <p class="justify">A linguagem C pode ser usada para diversas tarefas como: Editores de imagem e vídeo, sistemas de automação, sistemas operacionais. </p>

            </div>

            <div class="col-4 padding-lr-15">                

                <h4 class="center">C#</h4> 
                <p class="justify">C# é uma linguagem orientada a objetos e pode ser usada em: Aplicações web, desktop, mobile e jogos eletrônicos.</p>

            </div>

            <div class="col-4 padding-lr-15">           

                <h4 class="center">Python</h4> 
                <p class="justify">Python é um linguagem orientada a objetos e muito usada em: data science, machine learning, desenvolvimento web e desenvolvimento de aplicativos.</p>

            </div>

        </div>

    </div>

</asp:Content>
